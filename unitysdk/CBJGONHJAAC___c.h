#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJGONHJAAC;
namespace System { class Object; }

#define CBJGONHJAAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06DB00)
#define CBJGONHJAAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06DB40)
#define CBJGONHJAAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E06DB50)

inline static constexpr unsigned int CBJGONHJAAC___c_TypeDefinitionIndex = 34857;

	class CBJGONHJAAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJGONHJAAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC___C_CTOR_OFFSET))(this);
		}

		::CBJGONHJAAC* __cctor_b__28_0()
		{
			return ((::CBJGONHJAAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
