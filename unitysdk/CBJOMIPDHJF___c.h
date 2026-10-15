#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJOMIPDHJF;
namespace System { class Object; }

#define CBJOMIPDHJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E040F70)
#define CBJOMIPDHJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E040FB0)
#define CBJOMIPDHJF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E040FC0)

inline static constexpr unsigned int CBJOMIPDHJF___c_TypeDefinitionIndex = 26173;

	class CBJOMIPDHJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJOMIPDHJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJOMIPDHJF___C_CTOR_OFFSET))(this);
		}

		::CBJOMIPDHJF* __cctor_b__38_0()
		{
			return ((::CBJOMIPDHJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJOMIPDHJF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
