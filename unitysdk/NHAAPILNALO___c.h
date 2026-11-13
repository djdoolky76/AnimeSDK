#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHAAPILNALO;
namespace System { class Object; }

#define NHAAPILNALO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20409280)
#define NHAAPILNALO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204092C0)
#define NHAAPILNALO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204092D0)

inline static constexpr unsigned int NHAAPILNALO___c_TypeDefinitionIndex = 29538;

	class NHAAPILNALO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHAAPILNALO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO___C_CTOR_OFFSET))(this);
		}

		::NHAAPILNALO* __cctor_b__23_0()
		{
			return ((::NHAAPILNALO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAAPILNALO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
