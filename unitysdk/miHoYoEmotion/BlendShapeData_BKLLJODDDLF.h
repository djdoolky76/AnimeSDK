#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D579320)
#define MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1D579330)
#define MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF_WRITE_OFFSET UNITYSDK_OFFSET(0x1D579550)
#define MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5796A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BlendShapeData_BKLLJODDDLF_TypeDefinitionIndex = 37983;

	class BlendShapeData_BKLLJODDDLF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::miHoYoEmotion::BlendShapeData& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeData&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::miHoYoEmotion::BlendShapeData& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BlendShapeData&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA_BKLLJODDDLF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
