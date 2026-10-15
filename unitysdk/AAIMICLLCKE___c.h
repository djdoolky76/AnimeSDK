#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAIMICLLCKE;
namespace System { class Object; }

#define AAIMICLLCKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8EC10)
#define AAIMICLLCKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8EC50)
#define AAIMICLLCKE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD8EC60)

inline static constexpr unsigned int AAIMICLLCKE___c_TypeDefinitionIndex = 31791;

	class AAIMICLLCKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAIMICLLCKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE___C_CTOR_OFFSET))(this);
		}

		::AAIMICLLCKE* __cctor_b__28_0()
		{
			return ((::AAIMICLLCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMICLLCKE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
