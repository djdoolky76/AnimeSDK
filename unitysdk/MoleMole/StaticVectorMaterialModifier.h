#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier_PAKMIKDNEOH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MOELDGPPDPM;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x5FFD90)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_OFFSETCONFIGS_OFFSET UNITYSDK_OFFSET(0x3CF550)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_VECTORTYPE_OFFSET UNITYSDK_OFFSET(0x3844E0)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_JFPIGHKJHPO_OFFSET UNITYSDK_OFFSET(0x7D2080)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_MFLAMFHHBEP_OFFSET UNITYSDK_OFFSET(0x7D20D0)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x7D2070)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7D2040)
#define MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x7D2010)

namespace MoleMole
{
	inline static constexpr unsigned int StaticVectorMaterialModifier_TypeDefinitionIndex = 92755;

	struct alignas(8) StaticVectorMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Byte maskType; // 0x18
		::System::Boolean _isLocal; // 0x19
		::System::Boolean enable; // 0x1A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector4 value; // 0x1C
		::MoleMole::StaticVectorMaterialModifier_PAKMIKDNEOH _vectorType; // 0x2C
		::Il2CppArray<::System::Object*>* _offsetConfigs; // 0x30

		::System::Void _ctor(::System::String* BGJOPBCCMOC, ::System::Boolean FBHDMHOBIEE, ::MoleMole::StaticVectorMaterialModifier_PAKMIKDNEOH ADGEOFGOECH)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::MoleMole::StaticVectorMaterialModifier_PAKMIKDNEOH))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_OFFSET))(this, BGJOPBCCMOC, FBHDMHOBIEE, ADGEOFGOECH);
		}

		::System::Void _ctor_1(::System::String* BGJOPBCCMOC, ::System::Boolean FBHDMHOBIEE, ::Il2CppArray<::System::Object*>* ODDPBBMAFDD)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER__CTOR_1_OFFSET))(this, BGJOPBCCMOC, FBHDMHOBIEE, ODDPBBMAFDD);
		}

		::System::Boolean get_isLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_ISLOCAL_OFFSET))(this);
		}

		::MoleMole::StaticVectorMaterialModifier_PAKMIKDNEOH get_vectorType()
		{
			return ((::MoleMole::StaticVectorMaterialModifier_PAKMIKDNEOH(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_VECTORTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_offsetConfigs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_GET_OFFSETCONFIGS_OFFSET))(this);
		}

		::MOELDGPPDPM* NMBJIKEJKCK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_NMBJIKEJKCK_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
		}

		::System::Collections::Generic::List_1<::System::String*>* JFPIGHKJHPO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_JFPIGHKJHPO_OFFSET))(this);
		}

		::System::String* MFLAMFHHBEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICVECTORMATERIALMODIFIER_MFLAMFHHBEP_OFFSET))(this);
		}
	};
}
