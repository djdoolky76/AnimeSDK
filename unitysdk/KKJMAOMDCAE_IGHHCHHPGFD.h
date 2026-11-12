#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKJMAOMDCAE_IGHHCHHPGFD_AIPBECDIDJE_OFFSET UNITYSDK_OFFSET(0xBD178C0)
#define KKJMAOMDCAE_IGHHCHHPGFD_ANONFIEJIMA_OFFSET UNITYSDK_OFFSET(0xBD17730)
#define KKJMAOMDCAE_IGHHCHHPGFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD17C80)
#define KKJMAOMDCAE_IGHHCHHPGFD_GACKEJICMEF_OFFSET UNITYSDK_OFFSET(0xBD17AE0)
#define KKJMAOMDCAE_IGHHCHHPGFD_GFNCDBDMGPA_OFFSET UNITYSDK_OFFSET(0xBD176C0)
#define KKJMAOMDCAE_IGHHCHHPGFD_NCGNACLNJMF_OFFSET UNITYSDK_OFFSET(0xBD17940)
#define KKJMAOMDCAE_IGHHCHHPGFD_OMPFMLOCLEO_OFFSET UNITYSDK_OFFSET(0xBD17570)
#define KKJMAOMDCAE_IGHHCHHPGFD_ONNKKJJFNME_OFFSET UNITYSDK_OFFSET(0xBD17820)

inline static constexpr unsigned int KKJMAOMDCAE_IGHHCHHPGFD_TypeDefinitionIndex = 66316;

	class KKJMAOMDCAE_IGHHCHHPGFD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* FrontRoles; // 0x10
		::Il2CppArray<::System::Object*>* BackRoles; // 0x18
		::Il2CppArray<::System::UInt32>* CarryIDs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_CTOR_OFFSET))(this);
		}

		::System::Boolean OMPFMLOCLEO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_OMPFMLOCLEO_OFFSET))(this, a1);
		}

		::System::Boolean GFNCDBDMGPA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_GFNCDBDMGPA_OFFSET))(this, a1);
		}

		::System::Boolean ONNKKJJFNME(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_ONNKKJJFNME_OFFSET))(this, a1);
		}

		static ::System::Boolean ANONFIEJIMA(::Il2CppArray<::System::Object*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_ANONFIEJIMA_OFFSET))(a1, a2);
		}

		static ::System::Boolean AIPBECDIDJE(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_AIPBECDIDJE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* NCGNACLNJMF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_NCGNACLNJMF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GACKEJICMEF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_GACKEJICMEF_OFFSET))(this, a1);
		}

	};
