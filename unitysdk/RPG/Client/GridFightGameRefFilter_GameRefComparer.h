#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefFilter_GameRefComparer; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GAMEREFCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CD537B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GAMEREFCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD537A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GAMEREFCOMPARER_GETCOMPARER_OFFSET UNITYSDK_OFFSET(0x1CD4F390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter_GameRefComparer_TypeDefinitionIndex = 66300;

	class GridFightGameRefFilter_GameRefComparer : public ::System::Object
	{
	public:
		::System::Func_3<::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*, ::System::Int32>* _Comparer; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GAMEREFCOMPARER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightGameRefFilter_GameRefComparer* GetComparer(::System::Func_3<::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*, ::System::Int32>* a1)
		{
			return ((::RPG::Client::GridFightGameRefFilter_GameRefComparer*(*)(::System::Func_3<::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GAMEREFCOMPARER_GETCOMPARER_OFFSET))(a1);
		}

		::System::Int32 Compare(::RPG::Client::GridFightGameRefData* a1, ::RPG::Client::GridFightGameRefData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GAMEREFCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
