#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKJMAOMDCAE_IGHHCHHPGFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CED30)
#define KKJMAOMDCAE_IGHHCHHPGFD_NCGNACLNJMF_OFFSET UNITYSDK_OFFSET(0xB4CEB90)
#define KKJMAOMDCAE_IGHHCHHPGFD_OMPFMLOCLEO_OFFSET UNITYSDK_OFFSET(0xB4CEA40)

	class KKJMAOMDCAE_IGHHCHHPGFD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CarryIDs; // 0x10
		::Il2CppArray<::System::Object*>* BackRoles; // 0x18
		::Il2CppArray<::System::Object*>* FrontRoles; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_CTOR_OFFSET))(this);
		}

		::System::Boolean OMPFMLOCLEO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_OMPFMLOCLEO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* NCGNACLNJMF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_IGHHCHHPGFD_NCGNACLNJMF_OFFSET))(this, a1);
		}

	};
