#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
class IDGNPKGEKGA;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NJMLJBNICND_CTOR_OFFSET UNITYSDK_OFFSET(0xBC200D0)
#define NJMLJBNICND_DJCKLFNMLAC_OFFSET UNITYSDK_OFFSET(0xBC1FC50)
#define NJMLJBNICND_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBC1FD70)
#define NJMLJBNICND_JHKKDFJHIKC_OFFSET UNITYSDK_OFFSET(0xBC1FF70)
#define NJMLJBNICND_LDLDGFOANJL_OFFSET UNITYSDK_OFFSET(0xBC1FCE0)
#define NJMLJBNICND_PFKAPCAKMAA_OFFSET UNITYSDK_OFFSET(0xBC20040)

inline static constexpr unsigned int NJMLJBNICND_TypeDefinitionIndex = 78229;

	class NJMLJBNICND : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Object*>* GNBGJMKPCDM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMLJBNICND_CTOR_OFFSET))(this);
		}

		::IDGNPKGEKGA* DJCKLFNMLAC()
		{
			return ((::IDGNPKGEKGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMLJBNICND_DJCKLFNMLAC_OFFSET))(this);
		}

		::ICCLDNDNHPD* LDLDGFOANJL()
		{
			return ((::ICCLDNDNHPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMLJBNICND_LDLDGFOANJL_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::IDGNPKGEKGA* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDGNPKGEKGA*, ::System::Action*))((::PBYTE)hIl2Cpp + NJMLJBNICND_HKKFFCBJOKM_OFFSET))(this, a1, a2);
		}

		::System::Void JHKKDFJHIKC(::IDGNPKGEKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGNPKGEKGA*))((::PBYTE)hIl2Cpp + NJMLJBNICND_JHKKDFJHIKC_OFFSET))(this, a1);
		}

		::System::Void PFKAPCAKMAA(::IDGNPKGEKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGNPKGEKGA*))((::PBYTE)hIl2Cpp + NJMLJBNICND_PFKAPCAKMAA_OFFSET))(this, a1);
		}

	};
