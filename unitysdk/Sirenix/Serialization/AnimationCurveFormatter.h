#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine { class AnimationCurve; }

#define SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x20032B00)
#define SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x20032B10)
#define SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x20032C80)
#define SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x20032E70)
#define SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x20032E10)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int AnimationCurveFormatter_TypeDefinitionIndex = 7588;

	class AnimationCurveFormatter
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::UnityEngine::Keyframe>*>** StaticGet_KeyframeSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::UnityEngine::Keyframe>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationCurveFormatter_TypeDefinitionIndex)->GetStaticField(0x63A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::WrapMode>** StaticGet_WrapModeSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::WrapMode>**)Il2CppClass::FromTypeDefinitionIndex(AnimationCurveFormatter_TypeDefinitionIndex)->GetStaticField(0x63A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER__CCTOR_OFFSET))();
		}

		::UnityEngine::AnimationCurve* GetUninitializedObject()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER_GETUNINITIALIZEDOBJECT_OFFSET))(this);
		}

		::System::Void Read(::UnityEngine::AnimationCurve*& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::UnityEngine::AnimationCurve*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ANIMATIONCURVEFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
