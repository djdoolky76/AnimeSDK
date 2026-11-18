#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15977BD0)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15977D20)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15977D80)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15977D30)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15977BC0)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575__CTOR_OFFSET UNITYSDK_OFFSET(0x159774E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController__AnimCoroutine_d__575_TypeDefinitionIndex = 55817;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82, typename T83, typename T84, typename T85, typename T86, typename T87, typename T88, typename T89, typename T90, typename T91, typename T92, typename T93, typename T94, typename T95, typename T96, typename T97, typename T98, typename T99, typename T100, typename T101, typename T102, typename T103, typename T104, typename T105, typename T106, typename T107, typename T108, typename T109, typename T110, typename T111, typename T112, typename T113, typename T114, typename T115, typename T116, typename T117, typename T118, typename T119, typename T120, typename T121, typename T122, typename T123, typename T124, typename T125, typename T126, typename T127, typename T128, typename T129, typename T130, typename T131, typename T132, typename T133, typename T134, typename T135, typename T136, typename T137, typename T138, typename T139, typename T140, typename T141, typename T142, typename T143, typename T144, typename T145, typename T146, typename T147, typename T148, typename T149, typename T150, typename T151, typename T152, typename T153, typename T154, typename T155, typename T156, typename T157, typename T158, typename T159, typename T160, typename T161, typename T162, typename T163, typename T164, typename T165, typename T166, typename T167, typename T168, typename T169, typename T170, typename T171, typename T172, typename T173, typename T174, typename T175, typename T176, typename T177, typename T178, typename T179, typename T180, typename T181, typename T182, typename T183, typename T184, typename T185, typename T186, typename T187, typename T188, typename T189, typename T190, typename T191, typename T192, typename T193, typename T194, typename T195, typename T196, typename T197, typename T198, typename T199, typename T200, typename T201, typename T202, typename T203, typename T204, typename T205, typename T206, typename T207, typename T208, typename T209, typename T210, typename T211, typename T212, typename T213, typename T214, typename T215, typename T216, typename T217, typename T218, typename T219, typename T220, typename T221, typename T222, typename T223, typename T224, typename T225, typename T226, typename T227, typename T228, typename T229, typename T230, typename T231, typename T232, typename T233, typename T234, typename T235, typename T236, typename T237, typename T238, typename T239, typename T240, typename T241, typename T242, typename T243, typename T244, typename T245, typename T246, typename T247, typename T248, typename T249, typename T250, typename T251, typename T252, typename T253, typename T254, typename T255, typename T256, typename T257, typename T258, typename T259, typename T260, typename T261, typename T262, typename T263, typename T264, typename T265, typename T266, typename T267, typename T268, typename T269, typename T270, typename T271, typename T272, typename T273, typename T274, typename T275, typename T276, typename T277, typename T278, typename T279, typename T280, typename T281, typename T282, typename T283, typename T284, typename T285, typename T286, typename T287, typename T288, typename T289, typename T290, typename T291, typename T292, typename T293, typename T294, typename T295, typename T296, typename T297, typename T298, typename T299, typename T300, typename T301, typename T302, typename T303, typename T304, typename T305, typename T306, typename T307, typename T308, typename T309, typename T310, typename T311, typename T312, typename T313, typename T314, typename T315, typename T316, typename T317, typename T318, typename T319, typename T320, typename T321, typename T322, typename T323, typename T324, typename T325, typename T326, typename T327, typename T328, typename T329, typename T330, typename T331, typename T332, typename T333, typename T334, typename T335, typename T336, typename T337, typename T338, typename T339, typename T340, typename T341, typename T342, typename T343, typename T344, typename T345, typename T346, typename T347, typename T348, typename T349, typename T350, typename T351, typename T352, typename T353, typename T354, typename T355, typename T356, typename T357, typename T358, typename T359, typename T360, typename T361, typename T362, typename T363, typename T364, typename T365, typename T366, typename T367, typename T368, typename T369, typename T370, typename T371, typename T372, typename T373, typename T374, typename T375, typename T376, typename T377, typename T378, typename T379, typename T380, typename T381, typename T382, typename T383, typename T384, typename T385, typename T386, typename T387, typename T388, typename T389, typename T390, typename T391, typename T392, typename T393, typename T394, typename T395, typename T396, typename T397, typename T398, typename T399, typename T400, typename T401, typename T402, typename T403, typename T404, typename T405, typename T406, typename T407, typename T408, typename T409, typename T410, typename T411, typename T412, typename T413, typename T414, typename T415, typename T416, typename T417, typename T418, typename T419, typename T420, typename T421, typename T422, typename T423, typename T424, typename T425, typename T426, typename T427, typename T428, typename T429, typename T430, typename T431, typename T432, typename T433, typename T434, typename T435, typename T436, typename T437, typename T438, typename T439, typename T440, typename T441, typename T442, typename T443, typename T444, typename T445, typename T446, typename T447, typename T448, typename T449, typename T450, typename T451, typename T452, typename T453, typename T454, typename T455, typename T456, typename T457, typename T458, typename T459, typename T460, typename T461, typename T462, typename T463, typename T464, typename T465, typename T466, typename T467, typename T468, typename T469, typename T470, typename T471, typename T472, typename T473, typename T474, typename T475, typename T476, typename T477, typename T478, typename T479, typename T480, typename T481, typename T482, typename T483, typename T484, typename T485, typename T486, typename T487, typename T488, typename T489, typename T490, typename T491, typename T492, typename T493, typename T494, typename T495, typename T496, typename T497, typename T498, typename T499, typename T500, typename T501, typename T502, typename T503, typename T504, typename T505, typename T506, typename T507, typename T508, typename T509, typename T510, typename T511, typename T512, typename T513, typename T514, typename T515, typename T516, typename T517, typename T518, typename T519, typename T520, typename T521, typename T522, typename T523, typename T524, typename T525, typename T526, typename T527, typename T528, typename T529, typename T530, typename T531, typename T532, typename T533, typename T534, typename T535, typename T536, typename T537, typename T538, typename T539, typename T540, typename T541, typename T542, typename T543, typename T544, typename T545, typename T546, typename T547, typename T548, typename T549, typename T550, typename T551, typename T552, typename T553, typename T554, typename T555, typename T556, typename T557, typename T558, typename T559, typename T560, typename T561, typename T562, typename T563, typename T564, typename T565, typename T566, typename T567, typename T568, typename T569, typename T570, typename T571, typename T572, typename T573, typename T574, typename T575>
	class UIBaseController__AnimCoroutine_d__575 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Single length; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Single __2__current; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__575_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
