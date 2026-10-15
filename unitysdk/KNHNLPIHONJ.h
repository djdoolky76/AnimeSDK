#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNHNLPIHONJ_BlobLabel.h"
#include "unitysdk/System/Object.h"
class KNHNLPIHONJ;
class KNHNLPIHONJ_KCBPAABGBNF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define KNHNLPIHONJ_CGCBGPNGALH_OFFSET UNITYSDK_OFFSET(0x1D0BC380)
#define KNHNLPIHONJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BC280)
#define KNHNLPIHONJ_DHOJNIEKCFB_OFFSET UNITYSDK_OFFSET(0x1D0BBDE0)
#define KNHNLPIHONJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0BC790)
#define KNHNLPIHONJ_ENCLKPPOAHH_OFFSET UNITYSDK_OFFSET(0x1D0BC1D0)
#define KNHNLPIHONJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0BCC70)
#define KNHNLPIHONJ_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1D0BC230)
#define KNHNLPIHONJ_HEPAKLLGBIE_OFFSET UNITYSDK_OFFSET(0x1D0BC020)
#define KNHNLPIHONJ_JPPFJAFCNHN_OFFSET UNITYSDK_OFFSET(0x1D0BC050)
#define KNHNLPIHONJ_MJJKIPLMLEE_OFFSET UNITYSDK_OFFSET(0x1D0BC200)
#define KNHNLPIHONJ_OAFNABADHNJ_OFFSET UNITYSDK_OFFSET(0x1D0BC500)

inline static constexpr unsigned int KNHNLPIHONJ_TypeDefinitionIndex = 10366;

	class KNHNLPIHONJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedList_2<::System::Object*, ::System::Object*>* EHANLAGGIND; // 0x10
		::System::Object* JGCBDJOOECG; // 0x18
		::System::Collections::Generic::SortedList_2<::System::Int32, ::System::Collections::Generic::Stack_1<::System::Object*>*>* CBHEDBGKEIA; // 0x20
		::System::Int64 FAMBAAJIKDG; // 0x28
		static ::KNHNLPIHONJ** StaticGet_EMLNOINPICJ()
		{
			return (::KNHNLPIHONJ**)UnitySDK::FromName("", "KNHNLPIHONJ")->GetStaticField(0x38B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::System::Object*>* DHOJNIEKCFB(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::Stack_1<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_DHOJNIEKCFB_OFFSET))(this, a1);
		}

		::KNHNLPIHONJ_BlobLabel HEPAKLLGBIE(::System::Int32 a1)
		{
			return ((::KNHNLPIHONJ_BlobLabel(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_HEPAKLLGBIE_OFFSET))(this, a1);
		}

		::KNHNLPIHONJ_KCBPAABGBNF* JPPFJAFCNHN(::System::Int32 a1)
		{
			return ((::KNHNLPIHONJ_KCBPAABGBNF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_JPPFJAFCNHN_OFFSET))(this, a1);
		}

		::System::Void ENCLKPPOAHH(::System::Int32 a1, ::KNHNLPIHONJ_BlobLabel a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KNHNLPIHONJ_BlobLabel))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_ENCLKPPOAHH_OFFSET))(this, a1, a2);
		}

		::KNHNLPIHONJ_BlobLabel MJJKIPLMLEE(::System::Int32 a1)
		{
			return ((::KNHNLPIHONJ_BlobLabel(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_MJJKIPLMLEE_OFFSET))(this, a1);
		}

		static ::KNHNLPIHONJ* GGBLHEHJBDO()
		{
			return ((::KNHNLPIHONJ*(*)())((::PBYTE)hIl2Cpp + KNHNLPIHONJ_GGBLHEHJBDO_OFFSET))();
		}

		::PVOID CGCBGPNGALH(::System::Int64 a1)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_CGCBGPNGALH_OFFSET))(this, a1);
		}

		::System::Void OAFNABADHNJ(::KNHNLPIHONJ_BlobLabel a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHNLPIHONJ_BlobLabel))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_OAFNABADHNJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHNLPIHONJ_FINALIZE_OFFSET))(this);
		}

	};
