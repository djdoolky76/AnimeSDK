#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CELDOPCADPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DDBA0)
#define CELDOPCADPF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8DE320)
#define CELDOPCADPF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C8DDC00)
#define CELDOPCADPF_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1C8E1080)

inline static constexpr unsigned int CELDOPCADPF_TypeDefinitionIndex = 42396;

	class CELDOPCADPF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* CCNHIALEGCD; // 0x10
		::OAFCCICMILM* CKJLAAOFGCC; // 0x18
		::FDPALAEIHPB* MBKIEFPKECG; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + CELDOPCADPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDOPCADPF_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDOPCADPF_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDOPCADPF_TEARDOWN_OFFSET))(this);
		}

	};
