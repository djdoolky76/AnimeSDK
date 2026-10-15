#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOLLHKIMDOC;
namespace System { class Object; }

#define NOLLHKIMDOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8E950)
#define NOLLHKIMDOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8E990)
#define NOLLHKIMDOC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB8E9A0)

inline static constexpr unsigned int NOLLHKIMDOC___c_TypeDefinitionIndex = 31784;

	class NOLLHKIMDOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOLLHKIMDOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC___C_CTOR_OFFSET))(this);
		}

		::NOLLHKIMDOC* __cctor_b__33_0()
		{
			return ((::NOLLHKIMDOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLLHKIMDOC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
