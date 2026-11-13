#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGHONKMDBGM;
namespace System { class Object; }

#define FGHONKMDBGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C5010)
#define FGHONKMDBGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C5050)
#define FGHONKMDBGM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8C5060)

inline static constexpr unsigned int FGHONKMDBGM___c_TypeDefinitionIndex = 27438;

	class FGHONKMDBGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x508D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGHONKMDBGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM___C_CTOR_OFFSET))(this);
		}

		::FGHONKMDBGM* __cctor_b__33_0()
		{
			return ((::FGHONKMDBGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
