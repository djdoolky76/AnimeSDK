#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEOCDNBFEBF;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Object; }

#define EEHCJFEEOLF_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2DEE0)
#define EEHCJFEEOLF_EJNOKHFGBJF_OFFSET UNITYSDK_OFFSET(0x13A2DB60)
#define EEHCJFEEOLF_GKFGJFKMFKD_OFFSET UNITYSDK_OFFSET(0x13A2DBA0)
#define EEHCJFEEOLF_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x13A2DC20)
#define EEHCJFEEOLF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x13A2DE90)

inline static constexpr unsigned int EEHCJFEEOLF_TypeDefinitionIndex = 79506;

	class EEHCJFEEOLF : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::JEOCDNBFEBF*>* ODJHAMAGJHO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHCJFEEOLF_CTOR_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::JEOCDNBFEBF*>* EJNOKHFGBJF()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::JEOCDNBFEBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHCJFEEOLF_EJNOKHFGBJF_OFFSET))(this);
		}

		::JEOCDNBFEBF* GKFGJFKMFKD()
		{
			return ((::JEOCDNBFEBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHCJFEEOLF_GKFGJFKMFKD_OFFSET))(this);
		}

		::System::Void KLAJGAKAFCP(::JEOCDNBFEBF* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JEOCDNBFEBF*, ::System::Object*))((::PBYTE)hIl2Cpp + EEHCJFEEOLF_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHCJFEEOLF_PJPFIHFAHGO_OFFSET))(this);
		}

	};
