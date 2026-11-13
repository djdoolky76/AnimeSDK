#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDLCNGPGEFP;
namespace Google::Protobuf { class IMessage; }

#define NFIKFJHPOFK_JMKDLGMDLIE_OFFSET UNITYSDK_OFFSET(0x18E78820)
#define NFIKFJHPOFK_KNMOMJHLDLG_OFFSET UNITYSDK_OFFSET(0x18E78120)
#define NFIKFJHPOFK_LNJFJINILDJ_OFFSET UNITYSDK_OFFSET(0x18E78900)

inline static constexpr unsigned int NFIKFJHPOFK_TypeDefinitionIndex = 80795;

	class NFIKFJHPOFK : public ::System::Object
	{
	public:
		static ::FDLCNGPGEFP* KNMOMJHLDLG(::System::UInt32 a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::FDLCNGPGEFP*(*)(::System::UInt32, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + NFIKFJHPOFK_KNMOMJHLDLG_OFFSET))(a1, a2);
		}

		static ::FDLCNGPGEFP* JMKDLGMDLIE(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::FDLCNGPGEFP*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFIKFJHPOFK_JMKDLGMDLIE_OFFSET))(a1);
		}

		static ::FDLCNGPGEFP* LNJFJINILDJ(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::FDLCNGPGEFP*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFIKFJHPOFK_LNJFJINILDJ_OFFSET))(a1);
		}

	};
