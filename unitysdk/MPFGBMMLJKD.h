#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGMDBNHGDND;
class MPFGBMMLJKD_FOPECHDJDMN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPFGBMMLJKD_AONEONHEHNA_OFFSET UNITYSDK_OFFSET(0x20336E60)
#define MPFGBMMLJKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20337080)
#define MPFGBMMLJKD_NOBBDDHOCKI_OFFSET UNITYSDK_OFFSET(0x20336800)

inline static constexpr unsigned int MPFGBMMLJKD_TypeDefinitionIndex = 44999;

	class MPFGBMMLJKD : public ::System::Object
	{
	public:
		static ::MPFGBMMLJKD_FOPECHDJDMN** StaticGet_JCLEAFEOFAL()
		{
			return (::MPFGBMMLJKD_FOPECHDJDMN**)UnitySDK::FromName("", "MPFGBMMLJKD")->GetStaticField(0x5E420);
		}

		static ::System::Collections::Generic::List_1<::JGMDBNHGDND*>** StaticGet_DPNMPDAKOFJ()
		{
			return (::System::Collections::Generic::List_1<::JGMDBNHGDND*>**)UnitySDK::FromName("", "MPFGBMMLJKD")->GetStaticField(0x5E428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPFGBMMLJKD_CCTOR_OFFSET))();
		}

		static ::JGMDBNHGDND* NOBBDDHOCKI(::System::Int32 a1)
		{
			return ((::JGMDBNHGDND*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MPFGBMMLJKD_NOBBDDHOCKI_OFFSET))(a1);
		}

		static ::System::Void AONEONHEHNA(::JGMDBNHGDND* a1)
		{
			return ((::System::Void(*)(::JGMDBNHGDND*))((::PBYTE)hIl2Cpp + MPFGBMMLJKD_AONEONHEHNA_OFFSET))(a1);
		}

	};
