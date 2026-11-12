#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDFAEPFCFHN_AMBOMIMDLMK_OFFSET UNITYSDK_OFFSET(0xBBD83D0)
#define KDFAEPFCFHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD8010)
#define KDFAEPFCFHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBD80C0)
#define KDFAEPFCFHN_FGLGMHJEFIM_OFFSET UNITYSDK_OFFSET(0xBBD8660)
#define KDFAEPFCFHN_INJALNOIBPF_OFFSET UNITYSDK_OFFSET(0xBBD81A0)
#define KDFAEPFCFHN_JHMMJDKHIEG_OFFSET UNITYSDK_OFFSET(0xBBD8200)

inline static constexpr unsigned int KDFAEPFCFHN_TypeDefinitionIndex = 68363;

	class KDFAEPFCFHN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* CBEDFFEHENB; // 0x10
		::System::Int32 LADPGKLGJPC; // 0x18
		// static const ::System::Object PCLFMDLIGNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFAEPFCFHN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFAEPFCFHN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean INJALNOIBPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFAEPFCFHN_INJALNOIBPF_OFFSET))(this);
		}

		::System::Void JHMMJDKHIEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFAEPFCFHN_JHMMJDKHIEG_OFFSET))(this, a1);
		}

		::System::Void AMBOMIMDLMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFAEPFCFHN_AMBOMIMDLMK_OFFSET))(this, a1);
		}

		static ::System::Void FGLGMHJEFIM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDFAEPFCFHN_FGLGMHJEFIM_OFFSET))();
		}

	};
