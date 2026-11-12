#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHDKFBDLNGL;
namespace System { class Object; }

#define IHDKFBDLNGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97B290)
#define IHDKFBDLNGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F97B2D0)
#define IHDKFBDLNGL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F97B2E0)

inline static constexpr unsigned int IHDKFBDLNGL___c_TypeDefinitionIndex = 26104;

	class IHDKFBDLNGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHDKFBDLNGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL___C_CTOR_OFFSET))(this);
		}

		::IHDKFBDLNGL* __cctor_b__33_0()
		{
			return ((::IHDKFBDLNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDKFBDLNGL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
