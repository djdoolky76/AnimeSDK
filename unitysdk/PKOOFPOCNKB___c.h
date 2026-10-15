#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKOOFPOCNKB;
namespace System { class Object; }

#define PKOOFPOCNKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF95F20)
#define PKOOFPOCNKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF95F60)
#define PKOOFPOCNKB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF95F70)

inline static constexpr unsigned int PKOOFPOCNKB___c_TypeDefinitionIndex = 33047;

	class PKOOFPOCNKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOOFPOCNKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB___C_CTOR_OFFSET))(this);
		}

		::PKOOFPOCNKB* __cctor_b__28_0()
		{
			return ((::PKOOFPOCNKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
