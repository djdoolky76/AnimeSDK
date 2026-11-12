#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class MMPOBKCOIGH;
namespace System { class Object; }

#define NAMLCPDKFNA_CTOR_OFFSET UNITYSDK_OFFSET(0xC32C1E0)
#define NAMLCPDKFNA_IOOFHLLJOFI_OFFSET UNITYSDK_OFFSET(0xC32C3B0)
#define NAMLCPDKFNA_PIBDIJOPAMN_OFFSET UNITYSDK_OFFSET(0xC32C450)
#define NAMLCPDKFNA_PIKDDGNFLNG_OFFSET UNITYSDK_OFFSET(0xC32C4F0)
#define NAMLCPDKFNA_START_OFFSET UNITYSDK_OFFSET(0xC32C230)
#define NAMLCPDKFNA_STOP_OFFSET UNITYSDK_OFFSET(0xC32C360)

inline static constexpr unsigned int NAMLCPDKFNA_TypeDefinitionIndex = 64113;

	class NAMLCPDKFNA : public ::BHPMNMMGLHI
	{
	public:
		::MMPOBKCOIGH* GFKHCEGDLJN; // 0x20
		::System::Void _ctor(::MMPOBKCOIGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPOBKCOIGH*))((::PBYTE)hIl2Cpp + NAMLCPDKFNA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMLCPDKFNA_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMLCPDKFNA_STOP_OFFSET))(this);
		}

		::System::Void IOOFHLLJOFI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NAMLCPDKFNA_IOOFHLLJOFI_OFFSET))(this, a1, a2);
		}

		::System::Void PIBDIJOPAMN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NAMLCPDKFNA_PIBDIJOPAMN_OFFSET))(this, a1, a2);
		}

		::System::Void PIKDDGNFLNG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NAMLCPDKFNA_PIKDDGNFLNG_OFFSET))(this, a1, a2);
		}

	};
