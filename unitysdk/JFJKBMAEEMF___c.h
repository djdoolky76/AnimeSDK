#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFJKBMAEEMF;
namespace System { class Object; }

#define JFJKBMAEEMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72CE30)
#define JFJKBMAEEMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72CE60)
#define JFJKBMAEEMF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E72CE70)

inline static constexpr unsigned int JFJKBMAEEMF___c_TypeDefinitionIndex = 26167;

	class JFJKBMAEEMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFJKBMAEEMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF___C_CTOR_OFFSET))(this);
		}

		::JFJKBMAEEMF* __cctor_b__18_0()
		{
			return ((::JFJKBMAEEMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
