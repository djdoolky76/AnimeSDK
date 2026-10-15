#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLNGKOPAMBJ;
class KBDDPBPABDD;
class OPPEGLOCAGH;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JCLDKJDFGEI_CTOR_OFFSET UNITYSDK_OFFSET(0x165A6010)
#define JCLDKJDFGEI_GET_EFFECTCOLORS_OFFSET UNITYSDK_OFFSET(0x165A6040)
#define JCLDKJDFGEI_GET_PAINTCOLORS_OFFSET UNITYSDK_OFFSET(0x165A6030)
#define JCLDKJDFGEI_GET_POSES_OFFSET UNITYSDK_OFFSET(0x165A6020)

	class JCLDKJDFGEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::KBDDPBPABDD*>* _PaintColors_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::CLNGKOPAMBJ*>* _Poses_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::OPPEGLOCAGH*>* _EffectColors_k__BackingField; // 0x20
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::CLNGKOPAMBJ*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::KBDDPBPABDD*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::OPPEGLOCAGH*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CLNGKOPAMBJ*>*, ::System::Collections::Generic::IReadOnlyList_1<::KBDDPBPABDD*>*, ::System::Collections::Generic::IReadOnlyList_1<::OPPEGLOCAGH*>*))((::PBYTE)hIl2Cpp + JCLDKJDFGEI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CLNGKOPAMBJ*>* get_Poses()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CLNGKOPAMBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLDKJDFGEI_GET_POSES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KBDDPBPABDD*>* get_PaintColors()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KBDDPBPABDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLDKJDFGEI_GET_PAINTCOLORS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::OPPEGLOCAGH*>* get_EffectColors()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::OPPEGLOCAGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLDKJDFGEI_GET_EFFECTCOLORS_OFFSET))(this);
		}

	};
