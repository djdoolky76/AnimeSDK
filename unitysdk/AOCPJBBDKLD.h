#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGKIILGCIKC.h"
class IAAOMMGICFK;
class LNKFLEEHJHH;
namespace RPG::GameCore { class TaskContext; }

#define AOCPJBBDKLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A840260)
#define AOCPJBBDKLD_NMMBJIBOEFI_OFFSET UNITYSDK_OFFSET(0x1A840290)

inline static constexpr unsigned int AOCPJBBDKLD_TypeDefinitionIndex = 53825;

	class AOCPJBBDKLD : public ::AGKIILGCIKC
	{
	public:
		::LNKFLEEHJHH* HBPPHGOKPDJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LNKFLEEHJHH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LNKFLEEHJHH*))((::PBYTE)hIl2Cpp + AOCPJBBDKLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean NMMBJIBOEFI(::IAAOMMGICFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAAOMMGICFK*))((::PBYTE)hIl2Cpp + AOCPJBBDKLD_NMMBJIBOEFI_OFFSET))(this, a1);
		}

	};
