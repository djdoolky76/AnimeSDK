#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PKFMOLIADAK;

#define PKFMOLIADAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CB090)
#define PKFMOLIADAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2CABC0)

inline static constexpr unsigned int PKFMOLIADAK_TypeDefinitionIndex = 11317;

	class PKFMOLIADAK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* JPOEFHLLNIK; // 0x10
		::Il2CppArray<::System::UInt32>* HDJGBKABEKF; // 0x18
		::Il2CppArray<::System::UInt32>* HMHGEJKHPJP; // 0x20
		::Il2CppArray<::System::UInt32>* JAABDPEPHBF; // 0x28
		::Il2CppArray<::System::UInt32>* MIECBNMEDGL; // 0x30
		::Il2CppArray<::System::UInt32>* OGEBAEGKHNO; // 0x38
		::Il2CppArray<::System::UInt32>* OGCDCMNMFIJ; // 0x40
		::Il2CppArray<::System::UInt32>* DJGJIPEMIGE; // 0x48
		::Il2CppArray<::System::UInt32>* PENMJDMOCKI; // 0x50
		::Il2CppArray<::System::UInt32>* OGDLLCOBDNB; // 0x58
		::Il2CppArray<::System::UInt32>* BKGBDEKBMAM; // 0x60
		::Il2CppArray<::System::UInt32>* APDKGPIBHCP; // 0x68
		::System::UInt32 GCPIKDBKKHJ; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMOLIADAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PKFMOLIADAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PKFMOLIADAK*))((::PBYTE)hIl2Cpp + PKFMOLIADAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
