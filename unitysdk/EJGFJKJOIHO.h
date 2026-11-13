#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJGFJKJOIHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E9050)
#define EJGFJKJOIHO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1F4E90B0)
#define EJGFJKJOIHO_OKEFAAMKPKK_OFFSET UNITYSDK_OFFSET(0x1F4E9E50)

inline static constexpr unsigned int EJGFJKJOIHO_TypeDefinitionIndex = 43366;

	class EJGFJKJOIHO : public ::System::Object
	{
	public:
		::OAFCCICMILM* CKJLAAOFGCC; // 0x10
		::FDPALAEIHPB* MBKIEFPKECG; // 0x18
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* ANDEKHHBIIA; // 0x20
		// static const ::System::Object KENLIFDFIEJ; // 0x0
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + EJGFJKJOIHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGFJKJOIHO_EXECUTE_OFFSET))(this);
		}

		::System::Void OKEFAAMKPKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGFJKJOIHO_OKEFAAMKPKK_OFFSET))(this);
		}

	};
