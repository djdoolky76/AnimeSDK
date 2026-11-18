#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace miHoYoEmotion { class StopShapeData; }

#define MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D5A3FF0)
#define MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1D5A4000)
#define MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ_WRITE_OFFSET UNITYSDK_OFFSET(0x1D5A40D0)
#define MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4180)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int StopShapeData_PEGGHIAFPCJ_TypeDefinitionIndex = 37995;

	class StopShapeData_PEGGHIAFPCJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::miHoYoEmotion::StopShapeData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::StopShapeData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::miHoYoEmotion::StopShapeData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::StopShapeData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_PEGGHIAFPCJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
