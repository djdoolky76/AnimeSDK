#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJLNGHFLABP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define KAINFBAJFMB_BEMDNIPJHAG_OFFSET UNITYSDK_OFFSET(0xB2D3C40)
#define KAINFBAJFMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D3BE0)
#define KAINFBAJFMB_DBEFDBMMHNF_OFFSET UNITYSDK_OFFSET(0xB2D3D40)
#define KAINFBAJFMB_JIPBBMPODME_OFFSET UNITYSDK_OFFSET(0xB2D3CD0)
#define KAINFBAJFMB_NGDAGBJIOFE_OFFSET UNITYSDK_OFFSET(0xB2D3F60)

inline static constexpr unsigned int KAINFBAJFMB_TypeDefinitionIndex = 79709;

	class KAINFBAJFMB : public ::System::Object
	{
	public:
		::System::Action* EGMGFMKIOHL; // 0x10
		::System::Collections::Generic::Queue_1<::AJLNGHFLABP*>* CGHLCFIBABI; // 0x18
		::System::Int32 BPCHPFGKCHF; // 0x20
		::System::Boolean DMBFJAEAGPL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAINFBAJFMB_CTOR_OFFSET))(this);
		}

		::System::Void BEMDNIPJHAG(::AJLNGHFLABP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJLNGHFLABP*))((::PBYTE)hIl2Cpp + KAINFBAJFMB_BEMDNIPJHAG_OFFSET))(this, a1);
		}

		::System::Void JIPBBMPODME(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KAINFBAJFMB_JIPBBMPODME_OFFSET))(this, a1);
		}

		::System::Void NGDAGBJIOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAINFBAJFMB_NGDAGBJIOFE_OFFSET))(this);
		}

		::System::Void DBEFDBMMHNF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAINFBAJFMB_DBEFDBMMHNF_OFFSET))(this, a1);
		}

	};
