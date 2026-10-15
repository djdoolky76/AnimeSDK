#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDFAEPFCFHN_AMBOMIMDLMK_OFFSET UNITYSDK_OFFSET(0xB34E4E0)
#define KDFAEPFCFHN_CTOR_OFFSET UNITYSDK_OFFSET(0xB34E120)
#define KDFAEPFCFHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB34E1D0)
#define KDFAEPFCFHN_FGLGMHJEFIM_OFFSET UNITYSDK_OFFSET(0xB34E770)
#define KDFAEPFCFHN_INJALNOIBPF_OFFSET UNITYSDK_OFFSET(0xB34E2B0)
#define KDFAEPFCFHN_JHMMJDKHIEG_OFFSET UNITYSDK_OFFSET(0xB34E310)

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
