#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/PrecompiledTypeDeserializer.h"

namespace BehaviorDesigner::Runtime { class BinaryDeserializeContext; }
namespace BehaviorDesigner::Runtime { class JsonDeserializeContext; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMAPGGPECBN_BINARYLOADFIELDS_OFFSET UNITYSDK_OFFSET(0x1C81E820)
#define OMAPGGPECBN_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C81DAC0)
#define OMAPGGPECBN_ISTYPESTRICTLYEQUAL_OFFSET UNITYSDK_OFFSET(0x1C81DBA0)
#define OMAPGGPECBN_JSONDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C81DBF0)
#define OMAPGGPECBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C81F270)

inline static constexpr unsigned int OMAPGGPECBN_TypeDefinitionIndex = 95931;

class OMAPGGPECBN : public ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAPGGPECBN__CTOR_OFFSET))(this);
	}

	::System::Object* CreateInstance()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAPGGPECBN_CREATEINSTANCE_OFFSET))(this);
	}

	::System::Boolean IsTypeStrictlyEqual(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMAPGGPECBN_ISTYPESTRICTLYEQUAL_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Object* JsonDeserializeObject(::BehaviorDesigner::Runtime::Tasks::Task* PLBEAIIJADM, ::System::Object* EIFONLCJOPG, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NNJOMEFILCC, ::BehaviorDesigner::Runtime::JsonDeserializeContext* AAOCANGHBDG)
	{
		return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + OMAPGGPECBN_JSONDESERIALIZEOBJECT_OFFSET))(this, PLBEAIIJADM, EIFONLCJOPG, NNJOMEFILCC, AAOCANGHBDG);
	}

	::System::Object* BinaryLoadFields(::System::Object* EIFONLCJOPG, ::System::Int32 GDCGPBPEKDE, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* AAOCANGHBDG)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*))((::PBYTE)hIl2Cpp + OMAPGGPECBN_BINARYLOADFIELDS_OFFSET))(this, EIFONLCJOPG, GDCGPBPEKDE, AAOCANGHBDG);
	}
};
