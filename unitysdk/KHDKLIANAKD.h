#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishItemKind.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishPrimitive.h"
#include "unitysdk/System/Object.h"
class LMEHKHJKMNC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHDKLIANAKD_CTOR_OFFSET UNITYSDK_OFFSET(0x19789260)

inline static constexpr unsigned int KHDKLIANAKD_TypeDefinitionIndex = 49985;

	class KHDKLIANAKD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* AnchorRotEuler; // 0x10
		::Il2CppArray<::System::Single>* Color; // 0x18
		::Il2CppArray<::System::Single>* AnchorScale; // 0x20
		::Il2CppArray<::System::Single>* Size; // 0x28
		::System::String* ScriptPath; // 0x30
		::System::String* Note; // 0x38
		::Il2CppArray<::System::Single>* RotEuler; // 0x40
		::System::Collections::Generic::List_1<::LMEHKHJKMNC*>* ChildTransformOverrides; // 0x48
		::System::String* FbxPath; // 0x50
		::Il2CppArray<::System::Single>* AnchorPos; // 0x58
		::Il2CppArray<::System::Single>* Pos; // 0x60
		::RPGTools::LDWhiteBox::PolishItemKind Kind; // 0x68
		::RPGTools::LDWhiteBox::PolishPrimitive Shape; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDKLIANAKD_CTOR_OFFSET))(this);
		}

	};
