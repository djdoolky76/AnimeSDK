#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEPCKFHMMHD.h"
#include "unitysdk/System/Object.h"
class EHOAJJIDGFF;
class KHNFFHCLLIF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBGAENHBEIF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBABA1A0)
#define NBGAENHBEIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBABA2C0)
#define NBGAENHBEIF_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBABA180)
#define NBGAENHBEIF_IIJPAELMEEF_OFFSET UNITYSDK_OFFSET(0xBABA340)
#define NBGAENHBEIF_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBABA190)

inline static constexpr unsigned int NBGAENHBEIF_TypeDefinitionIndex = 62744;

	class NBGAENHBEIF : public ::System::Object
	{
	public:
		::EHOAJJIDGFF* _Factory_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::DEPCKFHMMHD, ::KHNFFHCLLIF*>* IEHKMMAEDMH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGAENHBEIF_CTOR_OFFSET))(this);
		}

		::EHOAJJIDGFF* get_Factory()
		{
			return ((::EHOAJJIDGFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGAENHBEIF_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::EHOAJJIDGFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHOAJJIDGFF*))((::PBYTE)hIl2Cpp + NBGAENHBEIF_SET_FACTORY_OFFSET))(this, a1);
		}

		::KHNFFHCLLIF* ACMKLFOMPFC(::DEPCKFHMMHD a1)
		{
			return ((::KHNFFHCLLIF*(*)(::PVOID, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + NBGAENHBEIF_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::KHNFFHCLLIF* IIJPAELMEEF(::DEPCKFHMMHD a1)
		{
			return ((::KHNFFHCLLIF*(*)(::PVOID, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + NBGAENHBEIF_IIJPAELMEEF_OFFSET))(this, a1);
		}

	};
