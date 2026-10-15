#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIPGFGBEMG;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class ConstructorInfo; }

#define LDBCBLHGCLN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1EC57C50)
#define LDBCBLHGCLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC58400)
#define LDBCBLHGCLN_KCAMCLANHCC_OFFSET UNITYSDK_OFFSET(0x1EC57F10)

inline static constexpr unsigned int LDBCBLHGCLN_TypeDefinitionIndex = 44219;

	class LDBCBLHGCLN : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Reflection::ConstructorInfo*>** StaticGet_AEFFOKJDDEH()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Reflection::ConstructorInfo*>**)UnitySDK::FromName("", "LDBCBLHGCLN")->GetStaticField(0x499F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDBCBLHGCLN_CCTOR_OFFSET))();
		}

		static ::DEIPGFGBEMG* BPLPBPMEODA(::System::Object* a1)
		{
			return ((::DEIPGFGBEMG*(*)(::System::Object*))((::PBYTE)hIl2Cpp + LDBCBLHGCLN_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::System::Reflection::ConstructorInfo* KCAMCLANHCC(::System::Type* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + LDBCBLHGCLN_KCAMCLANHCC_OFFSET))(a1);
		}

	};
