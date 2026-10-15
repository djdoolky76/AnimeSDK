#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define HPGMGEOGOHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DBA9F0)
#define HPGMGEOGOHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBAA30)
#define HPGMGEOGOHE___C___SORTPOSLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0x15DBAA40)

inline static constexpr unsigned int HPGMGEOGOHE___c_TypeDefinitionIndex = 79341;

	class HPGMGEOGOHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32600);
		}

		static ::System::Comparison_1<::EPADPABCFGH*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::EPADPABCFGH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGMGEOGOHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGMGEOGOHE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortPosList_b__3_0(::EPADPABCFGH* a1, ::EPADPABCFGH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EPADPABCFGH*, ::EPADPABCFGH*))((::PBYTE)hIl2Cpp + HPGMGEOGOHE___C___SORTPOSLIST_B__3_0_OFFSET))(this, a1, a2);
		}

	};
