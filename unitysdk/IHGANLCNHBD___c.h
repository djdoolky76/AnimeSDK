#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGANLCNHBD;
namespace System { class Object; }

#define IHGANLCNHBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65CFB0)
#define IHGANLCNHBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65CFF0)
#define IHGANLCNHBD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E65D000)

inline static constexpr unsigned int IHGANLCNHBD___c_TypeDefinitionIndex = 29469;

	class IHGANLCNHBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHGANLCNHBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD___C_CTOR_OFFSET))(this);
		}

		::IHGANLCNHBD* __cctor_b__33_0()
		{
			return ((::IHGANLCNHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGANLCNHBD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
