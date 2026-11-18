#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/PrecompiledTypeDeserializer.h"

namespace BehaviorDesigner::Runtime { class BinaryDeserializeContext; }
namespace BehaviorDesigner::Runtime { class JsonDeserializeContext; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJBGFPNBFMK_BINARYLOADFIELDS_OFFSET UNITYSDK_OFFSET(0x1DCC35C0)
#define FJBGFPNBFMK_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DCC2BF0)
#define FJBGFPNBFMK_ISTYPESTRICTLYEQUAL_OFFSET UNITYSDK_OFFSET(0x1DCC2CB0)
#define FJBGFPNBFMK_JSONDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DCC2D00)
#define FJBGFPNBFMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC3C70)

inline static constexpr unsigned int FJBGFPNBFMK_TypeDefinitionIndex = 95783;

class FJBGFPNBFMK : public ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGFPNBFMK__CTOR_OFFSET))(this);
	}

	::System::Object* CreateInstance()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBGFPNBFMK_CREATEINSTANCE_OFFSET))(this);
	}

	::System::Boolean IsTypeStrictlyEqual(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJBGFPNBFMK_ISTYPESTRICTLYEQUAL_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Object* JsonDeserializeObject(::BehaviorDesigner::Runtime::Tasks::Task* PLBEAIIJADM, ::System::Object* EIFONLCJOPG, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NNJOMEFILCC, ::BehaviorDesigner::Runtime::JsonDeserializeContext* AAOCANGHBDG)
	{
		return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + FJBGFPNBFMK_JSONDESERIALIZEOBJECT_OFFSET))(this, PLBEAIIJADM, EIFONLCJOPG, NNJOMEFILCC, AAOCANGHBDG);
	}

	::System::Object* BinaryLoadFields(::System::Object* EIFONLCJOPG, ::System::Int32 GDCGPBPEKDE, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* AAOCANGHBDG)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*))((::PBYTE)hIl2Cpp + FJBGFPNBFMK_BINARYLOADFIELDS_OFFSET))(this, EIFONLCJOPG, GDCGPBPEKDE, AAOCANGHBDG);
	}
};
