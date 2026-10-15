#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APOKGADPHDC;
namespace System { class Object; }

#define APOKGADPHDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64E310)
#define APOKGADPHDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64E350)
#define APOKGADPHDC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E77FF40)

inline static constexpr unsigned int APOKGADPHDC___c_TypeDefinitionIndex = 33129;

	class APOKGADPHDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ADB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APOKGADPHDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC___C_CTOR_OFFSET))(this);
		}

		::APOKGADPHDC* __cctor_b__18_0()
		{
			return ((::APOKGADPHDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
