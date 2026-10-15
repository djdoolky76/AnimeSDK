#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGMDBNHGDND;

#define MPFGBMMLJKD_FOPECHDJDMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD81BA0)
#define MPFGBMMLJKD_FOPECHDJDMN_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_POOLMEMORYSTREAM__COMPARE_OFFSET UNITYSDK_OFFSET(0x1DD81BB0)

inline static constexpr unsigned int MPFGBMMLJKD_FOPECHDJDMN_TypeDefinitionIndex = 43925;

	class MPFGBMMLJKD_FOPECHDJDMN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFGBMMLJKD_FOPECHDJDMN_CTOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_Generic_IComparer_RPG_Client_PoolMemoryStream__Compare(::JGMDBNHGDND* a1, ::JGMDBNHGDND* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JGMDBNHGDND*, ::JGMDBNHGDND*))((::PBYTE)hIl2Cpp + MPFGBMMLJKD_FOPECHDJDMN_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_RPG_CLIENT_POOLMEMORYSTREAM__COMPARE_OFFSET))(this, a1, a2);
		}

	};
