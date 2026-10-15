#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPEDNENFCIN;
namespace System { class Object; }

#define OPEDNENFCIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDFCF0)
#define OPEDNENFCIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDFD30)
#define OPEDNENFCIN___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DEDFD40)

inline static constexpr unsigned int OPEDNENFCIN___c_TypeDefinitionIndex = 28539;

	class OPEDNENFCIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPEDNENFCIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEDNENFCIN___C_CTOR_OFFSET))(this);
		}

		::OPEDNENFCIN* __cctor_b__53_0()
		{
			return ((::OPEDNENFCIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEDNENFCIN___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
