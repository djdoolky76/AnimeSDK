#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNDLHMEPDMG;
class PJNDEJDPCLP;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define HNDLHMEPDMG_BLJOCCOPJGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D84F60)

inline static constexpr unsigned int HNDLHMEPDMG_BLJOCCOPJGM_TypeDefinitionIndex = 71501;

	class HNDLHMEPDMG_BLJOCCOPJGM : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* ILLEKIIHHDE; // 0x10
		::System::Func_2<::HNDLHMEPDMG*, ::PJNDEJDPCLP*>* MNOFFAGDOFO; // 0x18
		::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Func_2<::HNDLHMEPDMG*, ::PJNDEJDPCLP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Func_2<::HNDLHMEPDMG*, ::PJNDEJDPCLP*>*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_BLJOCCOPJGM_CTOR_OFFSET))(this, a1, a2);
		}

	};
