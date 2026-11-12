#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OAOJJOCIOOA_IBLPPDONBKE.h"
class OAOJJOCIOOA_FNJOJMOMMDB;

#define OAOJJOCIOOA_FNJOJMOMMDB_CCTOR_OFFSET UNITYSDK_OFFSET(0xC632B20)
#define OAOJJOCIOOA_FNJOJMOMMDB_CTOR_OFFSET UNITYSDK_OFFSET(0xC632930)
#define OAOJJOCIOOA_FNJOJMOMMDB_EQUALS_OFFSET UNITYSDK_OFFSET(0xC632940)
#define OAOJJOCIOOA_FNJOJMOMMDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC6329D0)

inline static constexpr unsigned int OAOJJOCIOOA_FNJOJMOMMDB_TypeDefinitionIndex = 61929;

	class OAOJJOCIOOA_FNJOJMOMMDB : public ::System::Object
	{
	public:
		static ::OAOJJOCIOOA_FNJOJMOMMDB** StaticGet_FMJPMFEDIJL()
		{
			return (::OAOJJOCIOOA_FNJOJMOMMDB**)UnitySDK::FromName("", "FNJOJMOMMDB")->GetStaticField(0x5E5C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_FNJOJMOMMDB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAOJJOCIOOA_FNJOJMOMMDB_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::OAOJJOCIOOA_IBLPPDONBKE a1, ::OAOJJOCIOOA_IBLPPDONBKE a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAOJJOCIOOA_IBLPPDONBKE, ::OAOJJOCIOOA_IBLPPDONBKE))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_FNJOJMOMMDB_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::OAOJJOCIOOA_IBLPPDONBKE a1)
		{
			return ((::System::Int32(*)(::PVOID, ::OAOJJOCIOOA_IBLPPDONBKE))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_FNJOJMOMMDB_GETHASHCODE_OFFSET))(this, a1);
		}

	};
