#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNGBDDIBCDD;
namespace System { class Object; }

#define PNGBDDIBCDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF8A1C0)
#define PNGBDDIBCDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8A200)
#define PNGBDDIBCDD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DF8A210)

inline static constexpr unsigned int PNGBDDIBCDD___c_TypeDefinitionIndex = 32512;

	class PNGBDDIBCDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGBDDIBCDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGBDDIBCDD___C_CTOR_OFFSET))(this);
		}

		::PNGBDDIBCDD* __cctor_b__48_0()
		{
			return ((::PNGBDDIBCDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGBDDIBCDD___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
