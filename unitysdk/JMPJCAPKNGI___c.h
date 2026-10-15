#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPJCAPKNGI;
namespace System { class Object; }

#define JMPJCAPKNGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E763840)
#define JMPJCAPKNGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E763880)
#define JMPJCAPKNGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E763890)

inline static constexpr unsigned int JMPJCAPKNGI___c_TypeDefinitionIndex = 26944;

	class JMPJCAPKNGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPJCAPKNGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI___C_CTOR_OFFSET))(this);
		}

		::JMPJCAPKNGI* __cctor_b__28_0()
		{
			return ((::JMPJCAPKNGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPJCAPKNGI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
