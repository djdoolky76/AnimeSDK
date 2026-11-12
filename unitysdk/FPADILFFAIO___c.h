#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FPADILFFAIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16839390)
#define FPADILFFAIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x168393D0)
#define FPADILFFAIO___C__GETSHOWMEMBERUIDS_B__8_0_OFFSET UNITYSDK_OFFSET(0x168393E0)

inline static constexpr unsigned int FPADILFFAIO___c_TypeDefinitionIndex = 67158;

	class FPADILFFAIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x549E0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x549E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPADILFFAIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADILFFAIO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetShowMemberUIDs_b__8_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + FPADILFFAIO___C__GETSHOWMEMBERUIDS_B__8_0_OFFSET))(this, a1);
		}

	};
