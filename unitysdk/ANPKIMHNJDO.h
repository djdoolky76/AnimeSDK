#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANPKIMHNJDO;
class FCOEMCEDLNL;

#define ANPKIMHNJDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB96E0)
#define ANPKIMHNJDO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB9360)

inline static constexpr unsigned int ANPKIMHNJDO_TypeDefinitionIndex = 11288;

	class ANPKIMHNJDO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DJGJIPEMIGE; // 0x10
		::Il2CppArray<::System::UInt32>* AANFAMJILOB; // 0x18
		::Il2CppArray<::System::UInt32>* ENIJMCCMFFJ; // 0x20
		::Il2CppArray<::System::UInt32>* HDJGBKABEKF; // 0x28
		::Il2CppArray<::System::UInt32>* NOIDIGCCPEJ; // 0x30
		::Il2CppArray<::System::UInt32>* JPOEFHLLNIK; // 0x38
		::Il2CppArray<::System::UInt32>* OGDLLCOBDNB; // 0x40
		::Il2CppArray<::System::UInt32>* KLGMFBFNALH; // 0x48
		::System::UInt32 OGMFNGPLDOB; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPKIMHNJDO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ANPKIMHNJDO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ANPKIMHNJDO*))((::PBYTE)hIl2Cpp + ANPKIMHNJDO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
