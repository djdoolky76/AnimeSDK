#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OAOJJOCIOOA_IBLPPDONBKE.h"
class OAOJJOCIOOA_FNJOJMOMMDB;

#define OAOJJOCIOOA_FNJOJMOMMDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB6EA30)
#define OAOJJOCIOOA_FNJOJMOMMDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6E840)
#define OAOJJOCIOOA_FNJOJMOMMDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB6E850)
#define OAOJJOCIOOA_FNJOJMOMMDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB6E8E0)

inline static constexpr unsigned int OAOJJOCIOOA_FNJOJMOMMDB_TypeDefinitionIndex = 61929;

	class OAOJJOCIOOA_FNJOJMOMMDB : public ::System::Object
	{
	public:
		static ::OAOJJOCIOOA_FNJOJMOMMDB** StaticGet_FMJPMFEDIJL()
		{
			return (::OAOJJOCIOOA_FNJOJMOMMDB**)UnitySDK::FromName("", "FNJOJMOMMDB")->GetStaticField(0x663A0);
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
