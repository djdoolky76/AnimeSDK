#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHBLOLLNHIC;
namespace System { class Object; }

#define OHBLOLLNHIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5DCC0)
#define OHBLOLLNHIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5DD00)
#define OHBLOLLNHIC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE5DD10)

inline static constexpr unsigned int OHBLOLLNHIC___c_TypeDefinitionIndex = 29307;

	class OHBLOLLNHIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBLOLLNHIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBLOLLNHIC___C_CTOR_OFFSET))(this);
		}

		::OHBLOLLNHIC* __cctor_b__38_0()
		{
			return ((::OHBLOLLNHIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBLOLLNHIC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
