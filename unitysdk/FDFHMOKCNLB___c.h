#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFHMOKCNLB;
namespace System { class Object; }

#define FDFHMOKCNLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E356370)
#define FDFHMOKCNLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3563B0)
#define FDFHMOKCNLB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3563C0)

inline static constexpr unsigned int FDFHMOKCNLB___c_TypeDefinitionIndex = 26537;

	class FDFHMOKCNLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFHMOKCNLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFHMOKCNLB___C_CTOR_OFFSET))(this);
		}

		::FDFHMOKCNLB* __cctor_b__23_0()
		{
			return ((::FDFHMOKCNLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFHMOKCNLB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
