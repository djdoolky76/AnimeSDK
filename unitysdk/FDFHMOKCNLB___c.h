#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFHMOKCNLB;
namespace System { class Object; }

#define FDFHMOKCNLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20533540)
#define FDFHMOKCNLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20533580)
#define FDFHMOKCNLB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20533590)

inline static constexpr unsigned int FDFHMOKCNLB___c_TypeDefinitionIndex = 27068;

	class FDFHMOKCNLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48310);
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
