#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AttachPointSet;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKBBKAKCMCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB986F90)
#define MKBBKAKCMCG_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB986E40)
#define MKBBKAKCMCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB986F00)
#define MKBBKAKCMCG_JCJACDENGNE_OFFSET UNITYSDK_OFFSET(0xB986DB0)
#define MKBBKAKCMCG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB986C60)
#define MKBBKAKCMCG_PJPNKHDIPNG_OFFSET UNITYSDK_OFFSET(0xB986CD0)

	class MKBBKAKCMCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AttachPointSet*>* MKMGGHJDEAF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBKAKCMCG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBKAKCMCG_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PJPNKHDIPNG(::AttachPointSet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + MKBBKAKCMCG_PJPNKHDIPNG_OFFSET))(this, a1);
		}

		::System::Void JCJACDENGNE(::AttachPointSet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AttachPointSet*))((::PBYTE)hIl2Cpp + MKBBKAKCMCG_JCJACDENGNE_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKBBKAKCMCG_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBBKAKCMCG_DISPOSE_OFFSET))(this);
		}

	};
