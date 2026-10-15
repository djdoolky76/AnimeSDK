#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNNHKPKCMJD.h"
class FLAINONONFA;
class FPBFICAFCDO;
class GHADLBDBHNA;
class MDOLOOKKHJM;
class POGDDEGBOPJ;
namespace System { class String; }

#define IKHDMKIGNDL_BNIOFKFNILA_OFFSET UNITYSDK_OFFSET(0x1C6DCDD0)
#define IKHDMKIGNDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DCE20)
#define IKHDMKIGNDL_EJAHEDDMHCF_OFFSET UNITYSDK_OFFSET(0x1C6DCED0)
#define IKHDMKIGNDL_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1C6DD1E0)
#define IKHDMKIGNDL_GBFOCPBCPDA_OFFSET UNITYSDK_OFFSET(0x1C6DD3A0)
#define IKHDMKIGNDL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6DD320)
#define IKHDMKIGNDL_PAFKJAHJMCE_OFFSET UNITYSDK_OFFSET(0x1C6DD410)

inline static constexpr unsigned int IKHDMKIGNDL_TypeDefinitionIndex = 37184;

	class IKHDMKIGNDL : public ::HNNHKPKCMJD
	{
	public:
		::FPBFICAFCDO* BKIFMPHBIAK; // 0x1A0
		::POGDDEGBOPJ* EIEOCLOHHIF; // 0x1A8
		::MDOLOOKKHJM* FKGGBEAELPE; // 0x1B0
		::FLAINONONFA* MJJHFBGLJHE; // 0x1B8
		::System::Void _ctor(::POGDDEGBOPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POGDDEGBOPJ*))((::PBYTE)hIl2Cpp + IKHDMKIGNDL_CTOR_OFFSET))(this, a1);
		}

		::System::Void BNIOFKFNILA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKHDMKIGNDL_BNIOFKFNILA_OFFSET))(this, a1);
		}

		::System::Void EJAHEDDMHCF(::GHADLBDBHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHADLBDBHNA*))((::PBYTE)hIl2Cpp + IKHDMKIGNDL_EJAHEDDMHCF_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHDMKIGNDL_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKHDMKIGNDL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GBFOCPBCPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHDMKIGNDL_GBFOCPBCPDA_OFFSET))(this);
		}

		::System::String* PAFKJAHJMCE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHDMKIGNDL_PAFKJAHJMCE_OFFSET))(this);
		}

	};
