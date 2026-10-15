#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBJNPBNNLBH;
namespace System { class Object; }

#define DBCCLMILLOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFD1A60)
#define DBCCLMILLOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD1A90)
#define DBCCLMILLOB___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0xDFD1AA0)

inline static constexpr unsigned int DBCCLMILLOB___c_TypeDefinitionIndex = 59795;

	class DBCCLMILLOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBCCLMILLOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCCLMILLOB___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__40_0(::NBJNPBNNLBH* a1, ::NBJNPBNNLBH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::NBJNPBNNLBH*, ::NBJNPBNNLBH*))((::PBYTE)hIl2Cpp + DBCCLMILLOB___C___CCTOR_B__40_0_OFFSET))(this, a1, a2);
		}

	};
