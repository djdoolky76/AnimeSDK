#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/PrecompiledTypeDeserializer.h"

namespace BehaviorDesigner::Runtime { class BinaryDeserializeContext; }
namespace BehaviorDesigner::Runtime { class JsonDeserializeContext; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJHNINLLOJA_BINARYLOADFIELDS_OFFSET UNITYSDK_OFFSET(0x1E012710)
#define AJHNINLLOJA_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E012080)
#define AJHNINLLOJA_ISTYPESTRICTLYEQUAL_OFFSET UNITYSDK_OFFSET(0x1E0120D0)
#define AJHNINLLOJA_JSONDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E012120)
#define AJHNINLLOJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E012D10)

inline static constexpr unsigned int AJHNINLLOJA_TypeDefinitionIndex = 96055;

class AJHNINLLOJA : public ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNINLLOJA__CTOR_OFFSET))(this);
	}

	::System::Object* CreateInstance()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNINLLOJA_CREATEINSTANCE_OFFSET))(this);
	}

	::System::Boolean IsTypeStrictlyEqual(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJHNINLLOJA_ISTYPESTRICTLYEQUAL_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Object* JsonDeserializeObject(::BehaviorDesigner::Runtime::Tasks::Task* PLBEAIIJADM, ::System::Object* EIFONLCJOPG, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NNJOMEFILCC, ::BehaviorDesigner::Runtime::JsonDeserializeContext* AAOCANGHBDG)
	{
		return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + AJHNINLLOJA_JSONDESERIALIZEOBJECT_OFFSET))(this, PLBEAIIJADM, EIFONLCJOPG, NNJOMEFILCC, AAOCANGHBDG);
	}

	::System::Object* BinaryLoadFields(::System::Object* EIFONLCJOPG, ::System::Int32 GDCGPBPEKDE, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* AAOCANGHBDG)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*))((::PBYTE)hIl2Cpp + AJHNINLLOJA_BINARYLOADFIELDS_OFFSET))(this, EIFONLCJOPG, GDCGPBPEKDE, AAOCANGHBDG);
	}
};
