#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/IJIMDIILCBF.h"
class EOCFEBFDGOH;
class FIEFFCJOMLK;
namespace System { class Object; }

#define DAHHFHFHLJK_CTOR_OFFSET UNITYSDK_OFFSET(0x199448B0)
#define DAHHFHFHLJK_FBHLHAKHIDF_OFFSET UNITYSDK_OFFSET(0x19944C20)
#define DAHHFHFHLJK_IOOFHLLJOFI_OFFSET UNITYSDK_OFFSET(0x19944A80)
#define DAHHFHFHLJK_LCOIKLJJPOK_OFFSET UNITYSDK_OFFSET(0x19944C90)
#define DAHHFHFHLJK_START_OFFSET UNITYSDK_OFFSET(0x19944940)
#define DAHHFHFHLJK_STOP_OFFSET UNITYSDK_OFFSET(0x19944A30)

inline static constexpr unsigned int DAHHFHFHLJK_TypeDefinitionIndex = 64235;

	class DAHHFHFHLJK : public ::BHPMNMMGLHI
	{
	public:
		::FIEFFCJOMLK* LMGKPMHOLAB; // 0x20
		::EOCFEBFDGOH* JJAGHGLLOME; // 0x28
		::System::Void _ctor(::FIEFFCJOMLK* a1, ::EOCFEBFDGOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FIEFFCJOMLK*, ::EOCFEBFDGOH*))((::PBYTE)hIl2Cpp + DAHHFHFHLJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHHFHFHLJK_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHHFHFHLJK_STOP_OFFSET))(this);
		}

		::System::Void IOOFHLLJOFI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DAHHFHFHLJK_IOOFHLLJOFI_OFFSET))(this, a1, a2);
		}

		::System::Void LCOIKLJJPOK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DAHHFHFHLJK_LCOIKLJJPOK_OFFSET))(this, a1, a2);
		}

		::System::Boolean FBHLHAKHIDF(::System::UInt32 a1, ::IJIMDIILCBF a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + DAHHFHFHLJK_FBHLHAKHIDF_OFFSET))(this, a1, a2);
		}

	};
