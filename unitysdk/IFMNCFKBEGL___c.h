#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFMNCFKBEGL;
namespace System { class Object; }

#define IFMNCFKBEGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20296E80)
#define IFMNCFKBEGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20296EC0)
#define IFMNCFKBEGL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x20296ED0)

inline static constexpr unsigned int IFMNCFKBEGL___c_TypeDefinitionIndex = 26521;

	class IFMNCFKBEGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x461E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMNCFKBEGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL___C_CTOR_OFFSET))(this);
		}

		::IFMNCFKBEGL* __cctor_b__43_0()
		{
			return ((::IFMNCFKBEGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
