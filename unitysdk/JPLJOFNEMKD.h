#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHGGGEIBACB;
class CMIBMDCJFEG;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPLJOFNEMKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C9470)
#define JPLJOFNEMKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2C8B10)
#define JPLJOFNEMKD_FKALJCNLOBB_OFFSET UNITYSDK_OFFSET(0xB2C8E00)
#define JPLJOFNEMKD_HLLLKBEIDII_OFFSET UNITYSDK_OFFSET(0xB2C9430)
#define JPLJOFNEMKD_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0xB2C8C30)
#define JPLJOFNEMKD_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xB2C9250)
#define JPLJOFNEMKD_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0xB2C89F0)
#define JPLJOFNEMKD_KPDFCMDPBFD_OFFSET UNITYSDK_OFFSET(0xB2C8D50)
#define JPLJOFNEMKD_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0xB2C8EE0)
#define JPLJOFNEMKD_NOAPIDBEMKK_OFFSET UNITYSDK_OFFSET(0xB2C93F0)
#define JPLJOFNEMKD_OBHLENKPFGF_OFFSET UNITYSDK_OFFSET(0xB2C9000)

	class JPLJOFNEMKD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* OLGHHHOFDBA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BHGGGEIBACB*>* HNDJBJMDGNN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BHGGGEIBACB*>* KNAAKCEOCJO; // 0x20
		::System::Boolean EMJHNHGEFKP; // 0x28
		::System::Boolean PPPHKMHOIAG; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_CTOR_OFFSET))(this);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_KCIEEJPFOCM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_DISPOSE_OFFSET))(this);
		}

		::BHGGGEIBACB* KPDFCMDPBFD(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::BHGGGEIBACB*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_KPDFCMDPBFD_OFFSET))(this, a1, a2);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void FKALJCNLOBB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_FKALJCNLOBB_OFFSET))(this, a1);
		}

		::System::Void LBBCPHPEHIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_LBBCPHPEHIO_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::BHGGGEIBACB* OBHLENKPFGF(::CMIBMDCJFEG* a1)
		{
			return ((::BHGGGEIBACB*(*)(::PVOID, ::CMIBMDCJFEG*))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_OBHLENKPFGF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* NOAPIDBEMKK()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_NOAPIDBEMKK_OFFSET))(this);
		}

		::System::Boolean HLLLKBEIDII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJOFNEMKD_HLLLKBEIDII_OFFSET))(this);
		}

	};
