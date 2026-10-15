#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGIEMMCEGLI;
class ECIIEBFKNMJ;
class FBMAGNGKMNI;
class IDGNPKGEKGA;
class KAKADGHNMFK;
class LMJPODEEGKK;
class MDDCPINJLLK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AADOCJDBAGC_AFNBGKICCEK_OFFSET UNITYSDK_OFFSET(0xB0C1330)
#define AADOCJDBAGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C0870)
#define AADOCJDBAGC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB0C08D0)
#define AADOCJDBAGC_GODLBHLONIP_OFFSET UNITYSDK_OFFSET(0xB0C1390)
#define AADOCJDBAGC_HGDHEHHOAHA_OFFSET UNITYSDK_OFFSET(0xB0C1B80)
#define AADOCJDBAGC_IJOLENBNDDC_OFFSET UNITYSDK_OFFSET(0xB0C1930)
#define AADOCJDBAGC_KNIBOHANNCM_OFFSET UNITYSDK_OFFSET(0xB0C20B0)
#define AADOCJDBAGC_LNIFCPFDBLA_OFFSET UNITYSDK_OFFSET(0xB0C14E0)
#define AADOCJDBAGC_MOIGBOKABGH_OFFSET UNITYSDK_OFFSET(0xB0C1710)

inline static constexpr unsigned int AADOCJDBAGC_TypeDefinitionIndex = 77600;

	class AADOCJDBAGC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* COBICGLGMNJ; // 0x10
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x18
		::LMJPODEEGKK* FKINCGODJEP; // 0x20
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + AADOCJDBAGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADOCJDBAGC_EXECUTE_OFFSET))(this);
		}

		::IDGNPKGEKGA* GODLBHLONIP(::FBMAGNGKMNI* a1, ::AGIEMMCEGLI* a2)
		{
			return ((::IDGNPKGEKGA*(*)(::PVOID, ::FBMAGNGKMNI*, ::AGIEMMCEGLI*))((::PBYTE)hIl2Cpp + AADOCJDBAGC_GODLBHLONIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean KNIBOHANNCM(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + AADOCJDBAGC_KNIBOHANNCM_OFFSET))(this, a1);
		}

		::System::Void LNIFCPFDBLA(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + AADOCJDBAGC_LNIFCPFDBLA_OFFSET))(this, a1);
		}

		::System::Void MOIGBOKABGH(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + AADOCJDBAGC_MOIGBOKABGH_OFFSET))(this, a1);
		}

		::System::Void IJOLENBNDDC(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + AADOCJDBAGC_IJOLENBNDDC_OFFSET))(this, a1);
		}

		::System::Void HGDHEHHOAHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADOCJDBAGC_HGDHEHHOAHA_OFFSET))(this);
		}

		::MDDCPINJLLK* AFNBGKICCEK()
		{
			return ((::MDDCPINJLLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADOCJDBAGC_AFNBGKICCEK_OFFSET))(this);
		}

	};
