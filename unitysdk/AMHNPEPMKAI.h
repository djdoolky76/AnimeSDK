#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/ValueTuple.h"
class BEGLIKEGPOC;
class IFNGPCPEKCB;
namespace RPG::Client::BlindBox::Pool { class IPoolContentEntry460; }
namespace RPG::Client::BlindBox::Pool { class IPoolContents; }
namespace RPG::Client::BlindBox::Pool { class PoolContentEntry460; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetRepository; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AMHNPEPMKAI_ALAAELOIOKM_OFFSET UNITYSDK_OFFSET(0x155801D0)
#define AMHNPEPMKAI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1557F190)
#define AMHNPEPMKAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1557F140)
#define AMHNPEPMKAI_FNMDMCAOHCJ_OFFSET UNITYSDK_OFFSET(0x15580300)
#define AMHNPEPMKAI_GBNDBFJAFLE_OFFSET UNITYSDK_OFFSET(0x155809B0)
#define AMHNPEPMKAI_IBHHOENIEPP_OFFSET UNITYSDK_OFFSET(0x15581360)
#define AMHNPEPMKAI_IIOAEKJHBOJ_OFFSET UNITYSDK_OFFSET(0x15580B00)
#define AMHNPEPMKAI_JCCLKHNHNIF_OFFSET UNITYSDK_OFFSET(0x155808C0)
#define AMHNPEPMKAI__CREATE_B__1_3_OFFSET UNITYSDK_OFFSET(0x15581410)

	class AMHNPEPMKAI : public ::System::Object
	{
	public:
		::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository* OAOJEPCGCFO; // 0x10
		::System::Void _ctor(::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository*))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::IPoolContents* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::BlindBox::Pool::IPoolContents*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_BPLPBPMEODA_OFFSET))(this, a1);
		}

		static ::System::Void JCCLKHNHNIF(::RPG::Client::BlindBox::Pool::IPoolContentEntry460* a1, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460* a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::RPG::Client::BlindBox::Pool::IPoolContentEntry460*, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_JCCLKHNHNIF_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::BlindBox::Pool::PoolContentEntry460* FNMDMCAOHCJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::RPG::Client::BlindBox::Pool::PoolContentEntry460*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_FNMDMCAOHCJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* IIOAEKJHBOJ(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_IIOAEKJHBOJ_OFFSET))(a1);
		}

		static ::System::Boolean IBHHOENIEPP(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_IBHHOENIEPP_OFFSET))(a1);
		}

		static ::BEGLIKEGPOC* ALAAELOIOKM(::System::UInt32 a1)
		{
			return ((::BEGLIKEGPOC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_ALAAELOIOKM_OFFSET))(a1);
		}

		static ::IFNGPCPEKCB* GBNDBFJAFLE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::IFNGPCPEKCB*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMHNPEPMKAI_GBNDBFJAFLE_OFFSET))(a1, a2);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPet* _Create_b__1_3(::System::ValueTuple a1)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + AMHNPEPMKAI__CREATE_B__1_3_OFFSET))(this, a1);
		}

	};
